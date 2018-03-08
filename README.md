# LeetCodePractice
algorithm training log
Build personal C code lib


teshi 

Linux 中的 initcall 机制 https://xinqiu.gitbooks.io/linux-insides-cn/content/Concepts/initcall.html



【嵌入式】基于makefile的STM32编译方法探索  https://www.jianshu.com/p/7f77a5486a26

 keil编译链接过程以及ARMCC、ARMASM、FROMELF、ARMLINK、ARMAR的使用  http://blog.csdn.net/u013904227/article/details/51285511
 
 Makefile 中:= ?= += =的区别  https://www.cnblogs.com/wanqieddy/archive/2011/09/21/2184257.html
 
 keil编译链接过程以及ARMCC、ARMASM、FROMELF、ARMLINK、ARMAR的使用   https://www.2cto.com/kf/201605/504594.html
 
 
http://wuchong.me/blog/2014/02/09/algorithm-sort-summary/   关于排序算法的总结

va_start和va_end使用详解  http://www.cnblogs.com/hanyonglu/archive/2011/05/07/2039916.html

https://www.bbsmax.com/A/GBJrWrgB50/  Keil中使用宏编译来定义DEBUG输出


typedef void (*func)(void *) 的含义


快速运算之：使用与运算符代替求余运算符的技巧  https://www.cnblogs.com/encode/p/7155147.html


https://www.cnblogs.com/Shirlies/p/4282182.html 多文件目录下makefile文件递归执行编译所有c文件

STM32F1做RSA，AES数据加解密，MD5信息摘要处理  http://blog.csdn.net/qq_31878855/article/details/69396791

http://cryptosource.de/product_flea_en.html

stm32加密库中的坑：需要是能crc的时钟，否则sha结果不正确。

https://www.gnu.org/software/make/manual/make.html  GUN make makefile的主要学习资料

密钥协商中对中间人攻击的防范：
https://qingfeng14.github.io/article/%E5%AF%86%E7%A0%81%E5%AD%A6%E7%AC%AC%E4%B8%89%E6%AC%A1%E5%A4%A7%E4%BD%9C%E4%B8%9A.html

各种加密算法比较
http://www.cnblogs.com/sunxuchu/p/5483956.html

Curve25519: new Diffie-Hellman speed records
https://cr.yp.to/ecdh/curve25519-20060209.pdf

徐恒, 陈恭亮, 杨福祥. 密钥交换中中间人攻击的防范[J]. 信息安全与通信保密, 2009(2):90-92.
	方案使用在特定的情况下，感觉用处不是很大。

陈珍英. 几种密钥交换算法和协议防止中间人攻击的分析与比较[J]. 太原城市职业技术学院学报, 2015(12):166-168.
	有一些用处，感觉最后部分在单片机的项目中是可以用到的

李亚敏, 李小鹏, 吴果. 身份认证的密钥交换算法[J]. 计算机工程, 2006, 32(12):171-172.
	
https://www.cnblogs.com/block2016/p/5635462.html


固件认证的第二种方案：
使用AES-GCM加密算法。这个算法带有认证的功能。



嵌入式系统固件安全的设计与实现

1.深入调研现有固件安全的相关算法与实现方法。
2.根据调研结果，确定固件安全所采取的算法选择，设计并完成相应实现。
3.针对公司项目平台，进一步确定最优的固件安全解决方案完成设计实现并验证。
4.对课题的研究工作和研究内容进行详细的总结，形成研究工作总结和论文。

对固件安全所面临的威胁与预防方案有宏观上的掌握；所实现的安全解决方案从理论上可以达到预防固件安全威胁的效果；完成相关开发文档及毕业论文。



ARM TrustZone安全隔离技术研究与应用
王熙友 - 电子科技大学 - 2013 - 被引量: 5
随着移动互联网和智能终端的发展,极大地提高了智能终端获取和处理信息的能力。这促使了部分原来只能由PC处理的数据业务转移到了移动终端上,这使得移动终端越来越多地接触到用户敏感信息。而普通移动终端操作系统的开放性和复杂性使得移动终端平台的安全性得不到保障。为此,ARM公司推出了TrustZone技术,可以通过Trustzone技术实现内存隔离和外设保护。GlobalPlatform发布了安全隔离的软硬件件架构,提出了可信执行环境的概念。 　　本文在TrustZone硬件隔离技术和GlobalPlatform软件架构基础上设计实现了可信执行环境原型系统。该原型系统包括操作... 展开  随着移动互联网和智能终端的发展,极大地提高了智能终端获取和处理信息的能力。这促使了部分原来只能由PC处理的数据业务转移到了移动终端上,这使得移动终端越来越多地接触到用户敏感信息。而普通移动终端操作系统的开放性和复杂性使得移动终端平台的安全性得不到保障。为此,ARM公司推出了TrustZone技术,可以通过Trustzone技术实现内存隔离和外设保护。GlobalPlatform发布了安全隔离的软硬件件架构,提出了可信执行环境的概念。 　　本文在TrustZone硬件隔离技术和GlobalPlatform软件架构基础上设计实现了可信执行环境原型系统。该原型系统包括操作系统TOS,普通执行环境通信代理、可信执行环境通信代理以及调用安全服务的客户端API接口。其中,TOS是可信执行环境重要的组件之一。它为安全服务提供基本的执行环境,负责系统安全环境配置,同时还要完成普通执行环境和可信执行环境间的切换。TOS是一个非独立的专用操作系统,受普通执行环境发来的命令驱动控制。TOS不支持应用程序的动态创建,应用程序与操作系统内核处于同一地址空间中。TOS的进程调度是非抢占的,只有当前进程运行结束或因等待设备而主动放弃CPU的情况下其它进程才有机会被调度运行。普通执行环境通信代理和可信执行环境通信代理实现了两个执行环境间的底层通信功能。客户端 API接口是对普通执行环境通信代理的封装,为用户访问可信执行环境下的安全服务提供友好的接口。普通执行环境采用了流行的Android系统,其通信代理是以Linux驱动的形式实现。可信执行环境的通信代理是TOS上的守护进程。 　　在此基础上,针对移动支付应用需求,本文提出了在可信执行环境原型系统基础上的移动支付模型。利用该模型,解决了移动支付的两个安全问题:安全存储和安全输入输出。论文最后给出了基于该移动支付安全模型的程序框架。 收起
可信执行环境 / 安全隔离 / 安全存储 / 移动支付


Design and Implementation of PUF-Based "Unclonable" RFID ICs for Anti-Counterfeiting and Security Applications
S Devadas，E Suh，S Paral，... - IEEE Internationa... - 2008 - 被引量: 202
Physical unclonable functions (PUFs) exploit the physical characteristics of the silicon and the IC manufacturing process variations to uniquely characterize each and every silicon chip. Since it is practically impossible to model, copy, or control the IC manufacturing process variations, PUFs not only make these chips unique, but also effectively unclonable. Exploiting the inherent variations in the IC manufacturing process, PUFs provide a secure, robust, low cost mechanism to authenticate silicon chips. This makes PUFs attractive for RFID ICs where cost and security are the key requirements. In this paper we present the design and implementation of PUF enabled "unclonable" RFIDs. The PUF-enabled RFID has been fabricated in 0.18 mu technology, and extensive testing results demonstrate that PUFs can securely authenticate an RFID with minimal overheads. We also highlight the advantages of PUF based RFIDs in anti-counterfeiting and security applications.
integrated circuit manufacture / radiofrequency identification / security / IC manufacturing / RFID / anticounterfeiting / physical unclonable functions / security / Authentication / Cloning


FPGA固件升级加密技术研究
崔东岳 - 《电子科技大学》 - 2011 - 被引量: 3
FPGA具有集成度高、可以重新配置的特点,因此在硬件电路中采用FPGA,不仅可以缩小电路的面积,通过对FPGA的重新配置以更新电路的功能,不仅缩短了以往修改硬件电路必须重新制板的开发周期并降低了成本,而且极大地提高整个系统的灵活性,因此基于FPGA的数字系统取得了飞速的发展,得到了广泛应用。 电子仪器和电子设备产品广泛采用基于FPGA的数字系统架构。如果产品在使用过程中发现问题或者功能有所改进,可以利用FPGA可以重新配置的特点,对FPGA进行固件升级操作,以优化产品的功能。目前产品功能优化要将产品返厂维护,更新维护的周期和成本都很高。本文提出了一种基于USB存储设备对FPGA进行固件升级操作的方案,并且能够将更新文件提供给用户自行操作。该方案填补了FPGA固件升级领域的空白,并申请了专利。 基于SRAM工艺的FPGA掉电后不能保存配置数据,上电时必须读取外部存储器中的配置数据,配置数据很容易被窃取,并且将固件升级文件提供给用户也会出现配置数据被窃取的现象出现。配置数据被窃取后,可以对FPGA的设计进行克隆,对FPGA设计的开发者和所有者造成极大的损失。保护FPGA设计的知识产权问题日趋严峻。本文给出了一种FPGA加密认证方案的设计与实现,对FPGA设计的使用进行授权,分为全部功能、多种有限功能和无功能。 本文对固件升级和加密认证进行了相关仿真、测试和验证,证明了功能实现的正确性。
现场可编程逻辑门阵列 / 固件升级 / 加密认证


Hardware Security of Semiconductor Chips: Progress and Lessons
DS Skorobogatov - 2013 - 被引量: 0
• Attack scenarios on secure systems – theft of service – attacks on service providers: satellite TV, electronic meters, access cards, software protection dongles – access to information: information recovery and extraction, gaining



Hardware-Based Trusted Computing Architectures for Isolation and Attestation
P Maene，J Gotzfried，RD Clercq，... - 《IEEE Transaction... - 2017 - 被引量: 5
Attackers target many different types of computer systems in use today, exploiting software vulnerabilities to take over the device and make it act maliciously. Reports of numerous attacks have been published, against the constrained embedded devices of the Internet of Things, mobile devices like smartphones and tablets, high-performance desktop and server environments, as well as complex industrial control systems. Trusted computing architectures give users and remote parties like software vendors guarantees about the behaviour of the software they run, protecting them against software-level attackers. This paper defines the security properties offered by these architectures, and presents detailed descriptions of twelve hardware-based attestation and isolation architectures from academia and industry. We compare all twelve designs with respect to the security properties and architectural features they offer. The presented architectures have been designed for a wide range of devices, supporting different security properties.
Trusted computing / security hardware / protected module architectures / isolation / attestation


Lightweight Anti-counterfeiting Solution for Low-End Commodity Hardware Using Inherent PUFs
A Schaller，T Arul，VVD Leest，... - Springer Internat... - 2014 - 被引量: 13
This paper presents a lightweight anti-counterfeiting solution using intrinsic Physically Unclonable Functions (PUFs), which are already embedded in most commodity hardware platforms. The presented solution is particularly suitable for low-end computing devices without on-board security features. Our anti-counterfeiting approach is based on extracting a unique fingerprint for individual devices exploiting inherent PUF characteristics from the on-chip static random-access memory (SRAM), which in turn allows to bind software to a particular hardware platform. Our solution does not require additional hardware, making it flexible as well as cost efficient. In a first step, we statistically analyze the characteristics of the intrinsic PUF instances found in two device types, both based on a widely used ARM Cortex-M microcontroller. We show that the quality of the PUF characteristics is almost ideal. Subsequently, we propose a security architecture to protect the platform鈥檚 firmware by using a modified boot loader. In a proof of concept, we embed our solution on a state-of-the-art commodity system-on-a-chip platform equipped with an MCU similar to the ones previously analyzed.



PUFs at a glance
U Ruhrmair，DE Holcomb - 《IEEE Xplore》 - 2014 - 被引量: 29
Physical Unclonable Functions (PUFs) are a new, hardware-based security primitive, which has been introduced just about a decade ago. In this paper, we provide a brief and easily accessible overview of the area. We describe the typical security features, implementations, attacks, protocols uses, and applications of PUFs. Special focus is placed on the two most prominent PUF types, so-called “Weak PUFs” and “Strong PUFs”, and their mutual differences.



Scan Based Side Channel Attack on Dedicated Hardware Implementations of Data Encryption Standard
B Yang，K Wu，R Karri - International Tes... - 2004 - 被引量: 266
Scan based test is a double edged sword. On one hand, it is a powerful test technique. On the other hand, it is an equally powerful attack tool. We show that scan chains can be used as a side channel to recover secret keys from a hardware implementation of the Data Encryption Standard (DES). By loading pairs of known plaintexts with one-bit difference in the normal mode and then scanning out the internal state in the test mode, we first determine the position of all scan elements in the scan chain. Then, based on a systematic analysis of the structure of the nonlinear substitution boxes, and using three additional plaintexts we discover the DES secret key. Finally, some assumptions in the attack are discussed.
application specific integrated circuits / boundary scan testing / cryptography / design for testability / ASIC / data encryption standard / design for testability / hardware implementations / nonlinear substitution boxes / plaintexts


Security in embedded systems: Design challenges
S Ravi，P Kocher，P Kocher，... - 《Acm Transactions... - 2004 - 被引量: 548
Many modern electronic systems---including personal computers, PDAs, cell phones, network routers, smart cards, and networked sensors to name a few---need to access, store, manipulate, or communicate sensitive information, making security a serious concern in their design. Embedded systems, which account for a wide range of products from the electronics, semiconductor, telecommunications, and networking industries, face some of the most demanding security concerns---on the one hand, they are often highly resource constrained, while on the other hand, they frequently need to operate in physically insecure environments.Security has been the subject of intensive research in the context of general-purpose computing and communications systems. However, security is often misconstrued by embedded system designers as the addition of features, such as specific cryptographic algorithms and security protocols, to the system. In reality, it is a new dimension that designers should consider throughout the design process, along with other metrics such as cost, performance, and power.The challenges unique to embedded systems require new approaches to security covering all aspects of embedded system design from architecture to implementation. Security processing, which refers to the computations that must be performed in a system for the purpose of security, can easily overwhelm the computational capabilities of processors in both low- and high-end embedded systems. This challenge, which we refer to as the "security processing gap," is compounded by increases in the amounts of data manipulated and the data rates that need to be achieved. Equally daunting is the "battery gap" in battery-powered embedded systems, which is caused by the disparity between rapidly increasing energy requirements for secure operation and slow improvements in battery technology. The final challenge is the "assurance gap," which relates to the gap between functional security measures (e.g., security services, protocols, and their constituent cryptographic algorithms) and actual secure implementations. This paper provides an introduction to the challenges involved in secure embedded system design, discusses recent advances in addressing them, and identifies opportunities for future research.
Embedded systems / architecture / authentication / battery life / cryptographic algorithms / decryption / encryption / hardware design / processing requirements / security


Security Analysis of Image-Based PUFs for Anti-counterfeiting
S Shariati，F Koeune，FX Standaert - Springer Berlin H... - 2012 - 被引量: 3
Physically Unclonable Functions are a promising tool to protect against counterfeiting attacks. Yet, as with any security system, it is important to embed them in a sound protocol, ensuring that no unexpected weakness is present in the “mortar” binding the components together. This paper proposes an anti-counterfeiting protocol that provably reduces to natural properties of its underlying components, namely an image-based Physical Function System bearing physical unclonability and an existentially unforgeable signature scheme. Experiments confirm the practical feasibility of our construction.



Security needs in embedded systems
A Ms - 《Iacr Cryptology ... - 2012 - 被引量: 0
Abstract: The paper discusses the hardware and software security requirements in an embedded device that are involved in the transfer of secure digital data. The paper gives an overview on the security processes like encryption/decryption, key agreement, digital signatures and digital certificates that are used to achieve data protection during data transfer. The paper also discusses the security requirements in the device to prevent possible physical attacks to expose the secure data such as secret keys from the device. The paper also briefs on the security enforced in a device by the use of proprietary security technology and also discusses the security measures taken during the production of the device. 1.



Semi-invasive attacks-A new approach to hardware security analysis
SP Skorobogatov - 2005 - 被引量: 253
The Pennsylvania State University CiteSeerX Archives



基于AES算法中S盒的分析研究与改进
张丽红，凌朝东 - 《信号处理》 - 2011 - 被引量: 6
由于AES S盒代数式只有9项过于简单且仿射变换对周期和迭代输出周期过短的原因,提出了一种新的构造S盒的解决方法。该方法通过在有限域上利用拉格朗日插值公式完全展开的系数求解方法得出了S盒和逆S盒的代数式系数表。与AES S盒构造原理导出的代数式相比,该方法具有直观且简单通用的特性。MATLAB仿真结果显示,新S盒的构造时间最短。其仿射变换周期和迭代输出周期分别高达16和256。S盒和逆S盒的严格雪崩准则距离分别降为376和304。S盒的代数式项数提高到253项。表明新S盒具有更复杂的代数结构、较好的差分特性以及非线性,同时根据仿射变换次数和S盒的构造时间进一步说明新S盒的设计既简洁又高效。
高级加密标准 / S盒 / MATLAB / 拉格朗日插值 / 仿射变换 / 代数式


Trusted computing building blocks for embedded linux-based ARM trustzone platforms
J Winter - Acm Workshop on S... - 2008 - 被引量: 171
Security is an emerging topic in the field of mobile and embedded platforms. The Trusted Computing Group (TCG) has outlined one possible approach to mobile platform security by recently extending their set of Trusted Computing specifications with Mobile Trusted Modules (MTMs). The MTM specification [13] published by the TCG is a platform independent approach to Trusted Computing explicitly allowing for a wide range of potential implementations. ARM follows a different approach to mobile platform security, by extending platforms with hardware supported ARM TrustZone security [3] mechanisms. This paper outlines an approach to merge TCG-style Trusted Computing concepts with ARM TrustZone technology in order to build an open Linux-based embedded trusted computing platform.
arm trustzone / linux / mobile trusted computing / virtualisation


TrustZone技术的分析与研究
郑显义，李文，孟丹 - 《计算机学报》 - 2016 - 被引量: 5
摘　要: 互联网时代的到来给嵌入式应用系统带来了前所未有的发展机遇,但是随之而来的网络应用安全问题也使得嵌入式应用系统面临着越来越严重的威胁,安全性已经成为嵌入式系统设计中一项极为重要的需求.为此,ARM公司提出了基于TrustZone技术的一套系统级安全解决方案,该技术是在尽量不影响系统的功耗、性能和面积的前提下通过硬件来实现安全环境与普通环境的隔离,而软件提供基本的安全服务和接口,由软硬件相结合而构建系统安全,也正因为这些特点而受到国内外研究者的广泛关注.文中重点分析了TrustZone技术提供的安全隔离系统基本架构、安全机制的实现方式及如何构建可信执行环境.在此基础上将该技术与其他提高嵌入式安全的技术作了分析对比,也进一步探讨了其优势与不足之处,并针对不足之处提出了可能的解决方案.最后,深入讨论了该技术在学术领域的相关研究工作和商业应用情况,同时结合当前嵌入式应用领域存在的安全问题展望了该技术的未来发展方向和应用需求.
嵌入式系统 / TrustZone技术 / 系统安全 / ARM / 系统结构


TyTAN:tiny trust anchor for tiny devices
F Brasser，BE Mahjoub，AR Sadeghi，... - Design Automation... - 2015 - 被引量: 41
Embedded systems are at the core of many security-sensitive and safety-critical applications, including automotive, industrial control systems, and critical infrastructures. Existing protection mechanisms against (software-based) malware are inflexible, too complex, expensive, or do not meet real-time requirements. We present TyTAN, which, to the best of our knowledge, is the first security architecture for embedded systems that provides (1) hardware-assisted strong isolation of dynamically configurable tasks and (2) real-time guarantees. We implemented TyTAN on the Intel庐 Siskiyou Peak embedded platform and demonstrate its efficiency and effectiveness through extensive evaluation.
embedded systems / invasive software / trusted computing / Intel Siskiyou Peak embedded platform / TyTAN / embedded systems / hardware-assisted dynamically configurable task isolation / malware / real-time guarantees / safety-critical applications


安全协议的设计与逻辑分析
卿斯汉 - 《软件学报》 - 2003 - 被引量: 218
摘　要: 随着网络应用的迅速发展,网络安全的问题日益重要.研究下述课题:安全协议的设计原则;安全协议设计中形式化方法的应用;各种形式化分析方法,特别是逻辑分析方法的特点.另外,还探讨了串空间模型在逻辑分析中的应用以及串空间模型指导安全协议形式化设计的可能性.
安全协议 / 设计 / 逻辑分析 / BAN类逻辑 / 串空间


采用数字签名技术的可信启动方法研究
杨霞，雷林，吴新勇，... - 《电子科技大学学报》 - 2016 - 被引量: 1
摘　要: 为保障嵌入式设备系统启动时的可信性,分析了现有可信启动技术对硬件模块严重依赖的现状,结合可信度量和可信链理论,提出了一套基于嵌入式Linux的可信启动方法。该方法以固件IROM作为信任根,利用数字签名和完整性验证技术检查启动实体的完整性和真实性,建立了一条从设备开机到内核启动的信任链。实验结果表明:该方法能有效地验证启动实体的完整性和真实性;与采用硬件模块保护启动实体预期度量值的方法比较,该方法无需增加任何硬件开销便可有效地保护预期度量值;同时保证实体更新时的可信检测。
信任链 / 数字签名技术 / 嵌入式LINUX / 信任根 / 可信启动技术 / 可信计算


差分能量分析攻击原理及其抵御措施的探讨
谢雨，范明钰，王光卫 - 《电子技术应用》 - 2005 - 被引量: 7
介绍了建立在执行密码运算的芯片的能量消耗基础上的攻击方式,这些攻击方式中差分能量分析攻击是最难被避免的。介绍了差分能量分析的原理以及防御这种类型攻击的主要思想。
攻击原理 / 攻击方式 / 差分 / 密码 / 芯片 / 防御 / 运算 / 抵御 / 类型 / 能量分析


高可信嵌入式操作系统体系架构研究
杨霞 - 电子科技大学 - 2010 - 被引量: 11
随着嵌入式系统功能日益强大,应用成本逐渐降低,嵌入式实时系统 已广泛应用于航空航天、核电能源、医疗卫生、国防电子等诸多安全关键系统中。这些系统一旦失效,将会引起生命财产的重大损失并可能严重破坏环境卫生。在一 些非常尖端的航空、国防电子等安全关键系统中,存在多个安全等级的应用要求,将这些系统称为多级安全关键嵌入式系统。随着互联网技术和软件技术在这些系统 中的大量使用,软件的故障、失效和安全威胁已逐渐成为引发系统失效的主要根源。因此,提高多级安全关键嵌入式系统的可信性越来越重要。高可信嵌入式操作系 统体系架构是从嵌入式系统软...
计算机网络 / 嵌入式系统 / 网络安全 / 工具软件


基于Xilinx SoPC的可重构嵌入式计算系统的研究与设计
张宇，冯丹 - 《计算机科学》 - 2010 - 被引量: 7
由于应用种类、实时性以及处理 效率等要求,高性能嵌入式计算硬件平台需要具备相当的计算能力以及一定的适应性。为此提出了一种基于Xilinx FPGA的动态可重构的片上系统设计方案。系统采用专用硬件来执行计算密集型任务,运用动态可重构技术来支持硬件处理模块功能的动态配置。研究了 Xilinx可编程片上系统上的3种硬件加速方案:CPU协处理器、PLB扩展加速器和MPMC扩展加速器。实验数据表明MPMC加速器性能最优。在 Vir-tex5 FPGA器件上实现了可动态重构的MPMC加速器,以128位AES加密、解密两个功能模块为例,从硬件资源占用率、重构延时等角度考察了可重构系统的特 点。
Embedded computing / System on programmable chip / Reconfigurable computing / Co-processing / Accelerator


基于ARM Trust Zone的安全存储研究与实现
魏兰 - 《电子科技大学》 - 2015 - 被引量: 0
随着移动通信行业的飞速发展,智能手机也得到了快速地发展和普及。各种智能手机APP如雨后春笋般涌现,极大地方便了人们的日常生活。由于人们对智能手机的依赖逐渐增加,一些重要的信息会被存储在智能手机中或是运行在其上,如何行之有效地保护智能手机上用户的敏感信息变得越来越重要。针对嵌入式安全问题,ARM公司提出了Trust Zone技术——集成在CPU内核中的系统安全性扩展,它将安全措施遍布到了整个系统设计的硬件架构中,具有极高的安全性。本文针对移动终端的安全性问题,以TrustZone技术和可信操作系统T-OS为基础,提出了一个安全存储方案。该方案将ARM TrustZone安全扩展机制与传统的加密技术相结合,为敏感数据的安全存储提供了更好的安全性。首先,使用TrustZone技术将系统的软硬件环境隔离为两个区,即安全区和普通区,分别对应于可信执行环境TEE和丰富执行环境REE。敏感信息存储跳转到安全区执行。硬件隔离主要是将存储芯片设置为安全状态,该状态下不允许普通区中的程序对其进行访问。软件隔离主要是操作系统的隔离以及一些应用程序。其次,根据Global Platform所制定安全标准,在T-OS中添加了一个加密模块,其中实现了多种加密算法,提供信息加密、认证和签名等多种功能,用户根据具体需求进行选择。根据Global Platform的安全标准和YAFFS文件系统原理还实现了一个简易文件系统,可以将加密后的信息存储在安全芯片上。接下来,在TEE中添加了一个安全存储的可信服务,结合加密模块与文件系统,实现加密存和读取解密两个功能。最后,在Android系统中实现了一个客户端应用程序,该程序对安全存储服务进行调用,并对安全存储方案的可行性进行验证。
TrustZone / 可信执行环境 / 丰富执行环境 / 可信操作系统 / 安全存储


基于Cache行为的旁路攻击
张鹏，邓高明，赵强，... - 《计算机工程》 - 2008 - 被引量: 7
分析新型高速缓冲存储器(Cache)旁路攻击技术,给出一种Cache旁路攻击方法。针对S盒操作使用查找表处理的数据加密标准(DES)算法实现,通过获取DES加密过程中前2轮加密运算对应的Cache命中信息,结合数学分析方法,可以有效地缩小DES密钥搜索空间。对Cache存储器行为和数学分析攻击进行仿真实现的结果显示,通过2~6个选择明文,大约耗费2~(30)次离线DES加密时间成功地恢复了DES密钥。给出了防御Cache攻击的基本对策。
旁路攻击 / 高速缓冲存储器 / 数据加密标准 / S盒


基于Cortex-A8处理器的嵌入式智能安全终端的研究与实现
郑荣浩 - 湖南大学 - 2015 - 被引量: 0
嵌入式终端等移动设备作为嵌入式技术的一个主要承载体,已经全面融入我们的日常生活中,其强大的功能和广阔的应用前景,使之成为近年来该领域的一个研究热点。另一方面,由于嵌入式平台的开放性和灵活性,给用户的信息安全带来了极大的安全隐患,如何保证嵌入式终端的安全可信成为一个亟待解决的问题。　　本文围绕嵌入式终端的功能需求,提出了基于Cortex-A8+Android的嵌入式智能终端的设计方案,并从硬件和软件两个方面展开具体实现过程。硬件方面:选取S5PV210芯片作为硬件系统的主CPU,根据芯片电路原理,设计并实现嵌入式终端的硬件系统,包括核心模...
Cortex-A8处理器 / 嵌入式技术 / 智能安全终端 / 设备驱动


基于TPM的运行时软件可信证据收集机制
古亮，郭耀，王华，... - 《软件学报》 - 2010 - 被引量: 34
摘　要: 扩展了已有的软件可信性证据模型,引入了运行时软件可信证据,从而提供了更为全面的软件可信 证据模型.为了提供客观、真实、全面的可信证据,提出了一种基于可信计算技术的软件运行时可信证据收集机制.利用可信平台模块(trusted platform module,简称TPM)提供的安全功能,结合“最新加载技术(late launch)”,在操作系统层引入了一个可信证据收集代理此代理利用TPM,可以客观地收集目标应用程序的运行时可作为软件可信证据的信息,并保障可信 证据本身的可信性.该可信证据收集机制具有良好的可扩展性,能够支持面向不同应用的信任评估模型.基于Linux Security Module,在Linux中实现了一个可信证据收集代理的原型.基于该原型,分析了一个分布式计算客户端实例的相关可信属性,并且分析了可信证据收集代 理在该应用实例中的性能开销.该应用实例验证了该方案的可行性.
高可信软件 / 软件可信性评估 / 软件可信证据 / 软件可信证据收集 / 可信计算 / TPM(trusted / platform / module


基于攻击树的安全芯片穿透性测试评估
张俊彦，陈清明 - 《计算机工程》 - 2014 - 被引量: 0
随着安全芯片应用范围的不断扩 大和应用环境的日趋复杂,需要通过穿透性测试验证芯片的安全性,同时有必要对测试进行评估。为此,提出一种基于攻击树模型的安全芯片穿透性测试评估方法。 分析安全芯片的穿透性测试过程,采用攻击树模型作为穿透性测试的描述模型,在此基础上提出攻击事件的多属性赋值方法、攻击代价的推算方法和攻击路径的分析 方法。应用结果表明,该方法可准确评估安全芯片穿透性测试结果。
安全芯片 / 穿透性测试 / 攻击树 / 攻击代价 / 攻击路径 / 非侵入式攻击 / 半侵入式攻击


基于固件文件系统的UEFI安全机制研究
房强 - 《电子科技大学》 - 2016 - 被引量: 0
传统的BIOS由于存在程序开发及维护困难、不易扩展等缺陷,已严重制约了计算机系统的发展。针对这些弊端,Intel等公司推出统一可扩展固件接口(Unified Extensible Firmware Interface,UEFI)以替代传统BIOS。UEFI固件是计算机启动的第一道程序,其安全性直接关系到整个计算机系统的安全,一旦遭到攻击,就会导致计算机在操作系统加载前就被攻击者控制。随着UEFI的普及,已经出现了针对UEFI的攻击,尤其是利用固件文件系统进行的攻击具有隐蔽性强、权限高的特点。鉴于UEFI潜在的安全威胁不断增多,对其安全机制研究刻不容缓。UEFI规范中加入了关于可信启动、数字签名等安全服务的定义,这些定义基于可信计算原理,完成UEFI固件的完整性校验和身份认证等功能。但是这些安全机制主要是针对第三方程序的检测,并不能有效阻止攻击者利用固件文件系统对UEFI固件进行攻击。由于UEFI相关文档的公开,固件文件系统的细节信息很容易被攻击者得到。攻击者利用这些信息对固件中的文件进行添加或修改,从而绕过固件安全机制对第三方驱动和应用程序的检查,直接对UEFI固件中的代码进行破坏和利用。本文将UEFI的启动阶段与可信计算的思想相结合,通过建立UEFI启动过程中的信任链和基于固件文件的可信度量机制,提出基于固件文件系统的UEFI安全方案,解决了目前攻击者利用固件文件系统对UEFI固件进行攻击的问题。本文依据UEFI Framework架构对UEFI启动过程阶段的划分,将前两个启动阶段作为可信度量根,其它阶段作为信任链的节点,从而在各阶段之间建立一条信任链。各阶段在进行控制权传递时,必须对下一阶段进行可信度量,若下一阶段可信则传递控制权,并依次将可信度量关系传递下去。UEFI安全方案采用完整性度量机制作为可信度量方法,通过对固件文件进行完整性度量,来确认启动各阶段的可信性,从而保证整个UEFI启动过程的可信性。根据UEFI安全方案,本文设计并实现基于UEFI驱动的固件安全模块。该模块使用UEFI驱动程序来虚拟TPM(Trusted Platform Module)芯片,主要由主模块、Hash算法引擎、通信单元及存储模块组成。固件安全模块是对安全方案功能的实现,存储在UEFI固件中,在UEFI启动过程中运行并保护UEFI启动。本文最后通过实验对固件安全模块进行测试,验证了固件安全方案的可行性及优缺点。
统一可扩展固件接口 / 固件文件系统 / 可信计算 / 信任链 / 安全模块


基于国密算法加密U盘的研究
王庆 - 《杭州电子科技大学》 - 2016 - 被引量: 0
随着社会信息技术的高速发展,数据存储与交换变得越来越频繁,人们对数据存储安全也越来越重视。虽然普通U盘具有便于携带、价格实惠等优点,但是存储在它上面的信息数据没有身份认证和加密算法保护,一旦遗失或者被窃,后果十分严重。针对普通U盘数据易泄漏以及国外加密算法可能存在的后门风险,设计了一款基于国密算法SM4的按键加密U盘,本文设计的加密U盘采用杭州华澜微科技有限公司自主研发的USB2.0安全控制器芯片S261作为主控,采用按键身份认证电路,以嵌入式多媒体卡(eMMC)作为储存介质,实现了存储在U盘中的信息数据的全硬件加密保护。介绍了USB系统结构、通信流模型及数据的控制传输和批量传输。根据主控S261芯片的硬件资源完成了加密U盘的整体架构,包括eMMC存储模块、USB通信模块、电源模块和采用PIC单片机实现的按键身份认证模块。S261通过内置加密引擎调用国密算法SM4对数据进行加密后存储在eMMC上,eMMC上的密文通过S261解密后经过USB接口传递给主机。在研究USB协议和eMMC协议的基础上,完成了加密U盘的固件设计,加密U盘的固件主要包括三个部分:SUP固件、CHP固件和PIC固件。SUP固件负责和主机USB接口的通信,调用国密算法SM4实现对数据的加解密和控制CHP;CHP固件负责控制eMMC和接受SUP的命令,完成eMMC的初始化及对eMMC的读写操作,CHP和eMMC之间的数据传递采用Ping-Pong传输,提高了读写速度;PIC固件实现用户的按键输入和身份认证,采用有限尝试次数策略,防止暴力恶意攻击破解。最后对按键加密U盘进行了功能和性能上的测试,达到设计目标。设计的安全加密U盘已经投放市场并得到验证。
加密U盘 / 国密 / 嵌入式多媒体卡 / 按键身份认证


基于可信计算的动态完整性度量架构
刘孜文，冯登国 - 《电子与信息学报》 - 2010 - 被引量: 94
该文提出一种基于可信计算的操作系统动态度量架构(DIMA), 帮助管理员动态地检查系统中进程和模块的完整性.相对于以往的各种操作系统度量架构,该架构能按需对系统中活动的进程或模块进行动态实时的完整性度量与监 控,基本解决了其他架构难以避免的TOC-TOU问题,特别是针对某些直接对运行中的进程的攻击有很好的效果.另外,DIMA实现了对对象细粒度度量-- 由度量整个文件实体细分为度量代码、参数、堆栈等等.最后给出了基于Linux操作系统的动态度量原型实现,在实现中使用了基于可信平台模块(TPM)作 为架构的信任源点,测试结果表明DIMA能够实现预定目标且有良好的性能.
可信计算模块 / 完整性度量 / 动态完整性度量架构(DIMA


基于可信计算技术的嵌入式安全保护体系研究
张心 - 《华中科技大学》 - 2009 - 被引量: 1
随着嵌入式技术的发展,嵌入式产品已经和我们的生活息息相关。然而,在信息时代的今天,黑客攻击事件频频发生,如何保护嵌入式系统中的机密数据不被入侵已成为引起广大科研人员的密切关注的问题之一。为了提高现有的嵌入式系统的安全性,分析了基本安全公理、可信计算技术的基本安全功能、可信平台模块和基于可信计算技术的TrustZone技术,并分析了提高Linux操作系统安全性的Linux安全模块。 针对TrustZone技术不能用于提高现有的嵌入式系统的安全性,而可信平台模块需耗费大量的系统资源,无法满足嵌入式系统低能耗、实时性强的技术要求,设计了一种基于TrustZone技术和可信平台模块相结合的安全增强的可信模块;针对嵌入式Linux操作系统对TrustZone技术引入的安全中断监控指令缺乏有效的监管,设计了新增Linux安全模块。 实现了基于安全增强的可信模块和新增Linux安全模块所建立的安全保护体系,称之为TrustZone-TPM-LSM安全保护体系,并实现了安全增强的可信模块的体系结构、多策略安全支持、强制进程管理模块、安全文件模块和安全网络模块。并将该安全保护体系应用到嵌入式开发平台AST-2100中,对系统进行了改进。根据基本安全公理对改进后的嵌入式系统安全进行了理论证明,并分别从身份认证安全、密码应用安全、数据存储安全、数据传输安全等方面对改进后的系统进行了抵抗攻击分析,理论证明和抵抗攻击分析都表明了改进后的系统是安全的。
可信计算技术 / 可信平台模块 / 嵌入式安全
