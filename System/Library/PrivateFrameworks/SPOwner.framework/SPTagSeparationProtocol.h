/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPTagSeparationProtocol <NSObject>
@required
-(void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 location:(id)arg3 completion:(/*^block*/id)arg4;
-(void)startRefreshingTagSeparationWithBlock:(/*^block*/id)arg1;
-(void)stopRefreshingTagSeparation;
-(void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 completion:(/*^block*/id)arg3;

@end

