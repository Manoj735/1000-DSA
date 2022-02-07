// https://youtu.be/NTop3VTjmxk
//  time complexity is 0(m+n)
//  space 0(m+n)
#include <bits/stdc++.h>
using namespace std;

float median(int nums1[], int nums2[], int m, int n)
{
    int finalArray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            finalArray[k++] = nums1[i++];
        }
        else
        {
            finalArray[k++] = nums2[j++];
        }
    }
    if (i < m)
    {
        while (i < m)
            finalArray[k++] = nums1[i++];
    }
    if (j < n)
    {
        while (j < n)
            finalArray[k++] = nums2[j++];
    }
    n = n + m;
    if (n % 2 == 1)
        return finalArray[((n + 1) / 2) - 1];
    else
        return ((float)finalArray[(n / 2) - 1] + (float)finalArray[(n / 2)]) / 2;
}

int main()
{
    int nums1[10];
    int nums2[10];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> nums2[j];
    }

    cout << "The median of two sorted array is " << fixed << setprecision(5)
         << median(nums1, nums2, m, n);
    return 0;
}

// https://youtu.be/NTop3VTjmxk
//  optimum approach
//  0(min(logm, logn))
//  space - > 0(1)
#include <bits/stdc++.h>
using namespace std;

float median(int nums1[], int nums2[], int m, int n)
{
    if (m > n)
        return median(nums2, nums1, n, m); // ensuring that binary search happens on minimum size array

    int low = 0, high = m, medianPos = ((m + n) + 1) / 2;
    while (low <= high)
    {
        int cut1 = (low + high) >> 1;
        int cut2 = medianPos - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
        int r1 = (cut1 == m) ? INT_MAX : nums1[cut1];
        int r2 = (cut2 == n) ? INT_MAX : nums2[cut2];

        if (l1 <= r2 && l2 <= r1)
        {
            if ((m + n) % 2 != 0)
                return max(l1, l2);
            else
                return (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        else if (l1 > r2)
            high = cut1 - 1;
        else
            low = cut1 + 1;
    }
    return 0.0;
}

int main()
{
    int nums1[] = {1, 4, 7, 10, 12};
    int nums2[] = {2, 3, 6, 15};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);
    cout << "The Median of two sorted arrays is" << fixed << setprecision(5)
         << median(nums1, nums2, m, n);
    return 0;
}