/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SADistance, SAMovieV2ShowtimeSnippet, NSString;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (assign,nonatomic) BOOL bookable; 
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)theaterShowtimeListCell;
+(id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)bookable;
-(void)setBookable:(BOOL)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
@end

