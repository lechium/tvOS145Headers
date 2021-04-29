/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EAP8021X.framework/EAP8021X
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
-(void)simStatusDidChange:(id)arg1 status:(id)arg2;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)authTokenChanged:(id)arg1;
-(void)shortLabelsDidChange;
-(void)subscriberCountryCodeDidChange:(id)arg1;
-(void)userDefaultVoiceSlotDidChange:(id)arg1;
-(void)prlVersionDidChange:(id)arg1 version:(id)arg2;

@end

