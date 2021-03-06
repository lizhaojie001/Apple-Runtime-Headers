//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSKernelClock.h>

@class NSArray;

@interface TSgPTPClock : TSKernelClock
{
    NSArray *_gptpPath;
    unsigned long long _grandmasterIdentity;
}

+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (unsigned long long)clockIdentifierForInterfaceName:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)availablegPTPClockIdentifiers;
@property(nonatomic) unsigned long long grandmasterIdentity; // @synthesize grandmasterIdentity=_grandmasterIdentity;
@property(copy, nonatomic) NSArray *gptpPath; // @synthesize gptpPath=_gptpPath;
- (void)dealloc;
- (id)portWithPortNumber:(unsigned short)arg1;
@property(readonly, copy, nonatomic) NSArray *ports; // @dynamic ports;
- (id)clockName;
- (BOOL)removeReverseSyncFromInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)addReverseSyncOnInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 syncInterval:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;
- (BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;
- (BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id *)arg2;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 allocatedPortNumber:(unsigned short *)arg2 error:(id *)arg3;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id *)arg2;
@property(nonatomic) unsigned char clockAccuracy; // @dynamic clockAccuracy;
@property(nonatomic) unsigned char clockClass; // @dynamic clockClass;
@property(nonatomic) unsigned char clockPriority2; // @dynamic clockPriority2;
@property(nonatomic) unsigned char clockPriority1; // @dynamic clockPriority1;
@property(readonly, nonatomic) unsigned long long clockIdentity; // @dynamic clockIdentity;
- (id)_gptpPath;
- (unsigned long long)_grandmasterIdentity;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void *)arg2;
- (BOOL)getRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 forGrandmasterIdentity:(unsigned long long *)arg5 portNumber:(unsigned short *)arg6 withError:(id *)arg7;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(CDStruct_4bcfbbae)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;
- (CDStruct_4bcfbbae)convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)arg1;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1;
- (BOOL)convertFrom32BitASTime:(unsigned int *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1 withFlags:(unsigned int *)arg2;
- (id)initWithClockIdentifier:(unsigned long long)arg1;

@end

