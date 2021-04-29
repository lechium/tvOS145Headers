/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL value; 
@required
-(BOOL)value;
-(NSString *)localizedTitle;
-(long long)presentationStyle;
-(NSString *)localizedShortTitle;
-(id)changeValue:(BOOL)arg1;

@end

