#ifndef GLDCPUINFOUTILS_H
#define GLDCPUINFOUTILS_H

#include <windows.h>
#include <QString>

namespace GLDCpuInfo
{
    typedef struct CpuCoreCount
    {
        int m_cpuLogicalCoreCount;   // CPU������
        int m_cpuCoreCount;          // �߼�CPU��
    } CoreCount;

    struct CpuInfo
    {
        QString   m_cpuBrand;              // CPU�̱�
        int       m_processorPackageCount; // ����cpu����
        CoreCount m_coreCount;             // ����
        ulong     m_processSpeed;          // cpu����ٶ�(��λMHZ)
    };

    QString getCpuBrand();

    ulong getCpuSpeed();

    int getCpuCount();

    CoreCount getCpuCoreCount();

    CpuInfo getCpuInfo();

    int getCpuUsage();
}

#endif // GLDCPUINFOUTILS_H