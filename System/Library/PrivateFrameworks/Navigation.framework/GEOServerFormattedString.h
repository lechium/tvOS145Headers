/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol GEOServerFormattedString <NSObject,NSCoding>
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSArray * formatStyles; 
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString; 
@required
-(NSArray *)formatStrings;
-(NSArray *)separators;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(NSArray *)formatStyles;

@end

