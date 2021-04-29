/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACalendar, SAUIAppPunchOut, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SACalendar * lastUpdated; 
@property (nonatomic,copy) NSString * publication; 
@property (nonatomic,retain) SAUIAppPunchOut * reviewPunchOut; 
@property (nonatomic,retain) SALocalSearchRating * reviewRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)review;
+(id)reviewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)comment;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setLastUpdated:(SACalendar *)arg1 ;
-(SACalendar *)lastUpdated;
-(id)encodedClassName;
-(NSString *)publication;
-(void)setPublication:(NSString *)arg1 ;
-(SAUIAppPunchOut *)reviewPunchOut;
-(void)setReviewPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SALocalSearchRating *)reviewRating;
-(void)setReviewRating:(SALocalSearchRating *)arg1 ;
@end

