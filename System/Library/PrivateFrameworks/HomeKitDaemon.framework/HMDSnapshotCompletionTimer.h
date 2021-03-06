/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFTimer.h>

@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer {

	HMDSnapshotSession* _snapshotSession;

}

@property (nonatomic,__weak,readonly) HMDSnapshotSession * snapshotSession;              //@synthesize snapshotSession=_snapshotSession - In the implementation block
-(id)initWithSnapshotSession:(id)arg1 timer:(double)arg2 ;
-(HMDSnapshotSession *)snapshotSession;
@end

