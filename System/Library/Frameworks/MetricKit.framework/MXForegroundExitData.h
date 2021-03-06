/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MXForegroundExitData : NSObject <NSSecureCoding> {

	unsigned long long _cumulativeNormalAppExitCount;
	unsigned long long _cumulativeMemoryResourceLimitExitCount;
	unsigned long long _cumulativeBadAccessExitCount;
	unsigned long long _cumulativeAbnormalExitCount;
	unsigned long long _cumulativeIllegalInstructionExitCount;
	unsigned long long _cumulativeAppWatchdogExitCount;
	unsigned long long _cumulativeCPUResourceLimitExitCount;

}

@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;                 //@synthesize cumulativeCPUResourceLimitExitCount=_cumulativeCPUResourceLimitExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeNormalAppExitCount;                        //@synthesize cumulativeNormalAppExitCount=_cumulativeNormalAppExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;              //@synthesize cumulativeMemoryResourceLimitExitCount=_cumulativeMemoryResourceLimitExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeBadAccessExitCount;                        //@synthesize cumulativeBadAccessExitCount=_cumulativeBadAccessExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeAbnormalExitCount;                         //@synthesize cumulativeAbnormalExitCount=_cumulativeAbnormalExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;               //@synthesize cumulativeIllegalInstructionExitCount=_cumulativeIllegalInstructionExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;                      //@synthesize cumulativeAppWatchdogExitCount=_cumulativeAppWatchdogExitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7 ;
-(id)initWithNormalAppExitCount:(unsigned long long)arg1 withMemoryResourceLimitExitCount:(unsigned long long)arg2 withCPUResourceLimitExitCount:(unsigned long long)arg3 withBadAccessExitCount:(unsigned long long)arg4 withAbnormalExitCount:(unsigned long long)arg5 withIllegalInstructionExitCount:(unsigned long long)arg6 withAppWatchDogExitCount:(unsigned long long)arg7 ;
-(unsigned long long)cumulativeNormalAppExitCount;
-(unsigned long long)cumulativeMemoryResourceLimitExitCount;
-(unsigned long long)cumulativeBadAccessExitCount;
-(unsigned long long)cumulativeAbnormalExitCount;
-(unsigned long long)cumulativeIllegalInstructionExitCount;
-(unsigned long long)cumulativeAppWatchdogExitCount;
-(unsigned long long)cumulativeCPUResourceLimitExitCount;
@end

