/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMCameraClipManagerObserver <NSObject>
@optional
-(void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
-(void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;
-(void)clipManager:(id)arg1 didUpdateSignificantEvents:(id)arg2;
-(void)clipManager:(id)arg1 didRemoveSignificantEventsWithUUIDs:(id)arg2;

@end
