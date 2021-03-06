/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

@property (copy) NSArray * filterQueries; 
@property (readonly) NSString * keyboardLanguage; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
-(void)cancel;
-(void)start;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(NSString *)keyboardLanguage;
-(void)setFilterQueries:(NSArray *)arg1 ;
-(NSArray *)filterQueries;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 ;
@end

