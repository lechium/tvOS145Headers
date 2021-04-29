/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SANPVideoAudioAndSubtitleLanguageOptions, NSString;

@interface SANPVideoGetAudioTracksAndSubtitleOptionsCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SANPVideoAudioAndSubtitleLanguageOptions * languageOptions; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAudioTracksAndSubtitleOptionsCompleted;
+(id)getAudioTracksAndSubtitleOptionsCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setLanguageOptions:(SANPVideoAudioAndSubtitleLanguageOptions *)arg1 ;
-(SANPVideoAudioAndSubtitleLanguageOptions *)languageOptions;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

