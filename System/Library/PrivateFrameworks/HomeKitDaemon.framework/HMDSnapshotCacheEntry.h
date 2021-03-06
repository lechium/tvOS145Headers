/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDSnapshotFile, NSString, HMFTimer;

@interface HMDSnapshotCacheEntry : HMFObject {

	HMDSnapshotFile* _snapshotFile;
	NSString* _proactiveSessionID;
	HMFTimer* _timer;
	/*^block*/id _snapshotRequestCompletion;

}

@property (nonatomic,readonly) HMDSnapshotFile * snapshotFile;              //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,readonly) NSString * proactiveSessionID;               //@synthesize proactiveSessionID=_proactiveSessionID - In the implementation block
@property (nonatomic,readonly) HMFTimer * timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id snapshotRequestCompletion;                    //@synthesize snapshotRequestCompletion=_snapshotRequestCompletion - In the implementation block
-(id)description;
-(HMFTimer *)timer;
-(HMDSnapshotFile *)snapshotFile;
-(NSString *)proactiveSessionID;
-(id)initWithProactiveSessionID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3 ;
-(id)snapshotRequestCompletion;
-(void)setSnapshotRequestCompletion:(id)arg1 ;
@end

