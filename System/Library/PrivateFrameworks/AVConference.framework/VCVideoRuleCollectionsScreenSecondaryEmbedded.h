/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(unsigned)tilesPerFrame:(int)arg1 ;
-(void)selectPreferredRule:(id)arg1 screenSize:(CGSize)arg2 ;
@end

