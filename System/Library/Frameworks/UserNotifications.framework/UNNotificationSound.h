/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	long long _alertType;
	NSString* _alertTopic;
	NSString* _audioCategory;
	NSNumber* _audioVolume;
	double _maximumDuration;
	BOOL _critical;
	BOOL _shouldIgnoreAccessibilityDisabledVibrationSetting;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldRepeat;
	NSString* _toneFileName;
	NSURL* _toneFileURL;
	NSString* _toneIdentifier;
	unsigned long long _toneMediaLibraryItemIdentifier;
	NSString* _vibrationIdentifier;
	NSURL* _vibrationPatternFileURL;

}

@property (nonatomic,readonly) long long alertType;                                                 //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTopic;                                          //@synthesize alertTopic=_alertTopic - In the implementation block
@property (nonatomic,copy,readonly) NSString * audioCategory;                                       //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioVolume;                                         //@synthesize audioVolume=_audioVolume - In the implementation block
@property (getter=isCritical,nonatomic,readonly) BOOL critical;                                     //@synthesize critical=_critical - In the implementation block
@property (nonatomic,readonly) double maximumDuration;                                              //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;              //@synthesize shouldIgnoreAccessibilityDisabledVibrationSetting=_shouldIgnoreAccessibilityDisabledVibrationSetting - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreRingerSwitch;                                       //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepeat;                                                   //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneFileName;                                        //@synthesize toneFileName=_toneFileName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * toneFileURL;                                            //@synthesize toneFileURL=_toneFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneIdentifier;                                      //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long toneMediaLibraryItemIdentifier;                   //@synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * vibrationIdentifier;                                 //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * vibrationPatternFileURL;                                //@synthesize vibrationPatternFileURL=_vibrationPatternFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)soundWithAlertType:(long long)arg1 ;
+(id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(BOOL)arg3 toneFileName:(id)arg4 ;
+(id)defaultSound;
+(id)defaultSystemSound;
+(id)defaultCriticalSound;
+(id)defaultCriticalSoundWithAudioVolume:(float)arg1 ;
+(id)criticalSoundNamed:(id)arg1 ;
+(id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2 ;
+(id)soundNamed:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alertType;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(BOOL)arg5 maximumDuration:(double)arg6 shouldIgnoreAccessibilityDisabledVibrationSetting:(BOOL)arg7 shouldIgnoreRingerSwitch:(BOOL)arg8 shouldRepeat:(BOOL)arg9 toneFileName:(id)arg10 toneFileURL:(id)arg11 toneIdentifier:(id)arg12 toneMediaLibraryItemIdentifier:(unsigned long long)arg13 vibrationIdentifier:(id)arg14 vibrationPatternFileURL:(id)arg15 ;
-(NSString *)alertTopic;
-(NSString *)audioCategory;
-(NSNumber *)audioVolume;
-(double)maximumDuration;
-(BOOL)isCritical;
-(BOOL)shouldIgnoreAccessibilityDisabledVibrationSetting;
-(BOOL)shouldIgnoreRingerSwitch;
-(BOOL)shouldRepeat;
-(NSString *)toneFileName;
-(NSURL *)toneFileURL;
-(NSString *)toneIdentifier;
-(unsigned long long)toneMediaLibraryItemIdentifier;
-(NSString *)vibrationIdentifier;
-(NSURL *)vibrationPatternFileURL;
@end

