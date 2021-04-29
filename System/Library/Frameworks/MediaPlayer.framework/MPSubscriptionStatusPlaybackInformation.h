/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject {

	ICMusicSubscriptionStatus* _subscriptionStatusObject;
	BOOL _definitiveInformation;
	BOOL _hasPlaybackCapability;
	BOOL _requiresCarrierManualVerification;
	BOOL _shouldUseLease;
	BOOL _shouldUseAccountLessStreaming;

}

@property (getter=isDefinitiveInformation,nonatomic,readonly) BOOL definitiveInformation;              //@synthesize definitiveInformation=_definitiveInformation - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackCapability;                                             //@synthesize hasPlaybackCapability=_hasPlaybackCapability - In the implementation block
@property (nonatomic,readonly) BOOL requiresCarrierManualVerification;                                 //@synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLease;                                                    //@synthesize shouldUseLease=_shouldUseLease - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseAccountLessStreaming;                                     //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
-(id)description;
-(BOOL)shouldUseAccountLessStreaming;
-(id)initWithICSubscriptionStatus:(id)arg1 ;
-(BOOL)isDefinitiveInformation;
-(BOOL)hasPlaybackCapability;
-(BOOL)requiresCarrierManualVerification;
-(BOOL)shouldUseLease;
@end
