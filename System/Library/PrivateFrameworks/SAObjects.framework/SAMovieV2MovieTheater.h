/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SALocalSearchBusiness2, NSArray;

@interface SAMovieV2MovieTheater : SADomainObject

@property (nonatomic,retain) SALocalSearchBusiness2 * business; 
@property (nonatomic,copy) NSArray * movies; 
+(id)movieTheater;
+(id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocalSearchBusiness2 *)business;
-(void)setBusiness:(SALocalSearchBusiness2 *)arg1 ;
-(id)encodedClassName;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
@end

