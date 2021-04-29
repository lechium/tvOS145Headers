/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary, NSDate;

@interface PGSurveyResult : NSObject <PGQuestion> {

	unsigned short type;
	unsigned short state;
	unsigned short entityType;
	unsigned short displayType;
	NSString* entityIdentifier;
	NSString* momentIdentifier;
	NSDictionary* additionalInfo;
	double localFactoryScore;
	double score;
	NSDate* creationDate;

}

@property (nonatomic,copy) NSString * entityIdentifier; 
@property (nonatomic,copy) NSString * momentIdentifier; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short entityType; 
@property (assign,nonatomic) unsigned short displayType; 
@property (nonatomic,copy) NSDictionary * additionalInfo; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(void)setState:(unsigned short)arg1 ;
-(NSDate *)creationDate;
-(void)remove;
-(double)score;
-(unsigned short)displayType;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setDisplayType:(unsigned short)arg1 ;
-(unsigned short)entityType;
-(void)setEntityType:(unsigned short)arg1 ;
-(NSString *)entityIdentifier;
-(void)setEntityIdentifier:(NSString *)arg1 ;
-(NSString *)momentIdentifier;
-(void)setMomentIdentifier:(NSString *)arg1 ;
-(void)persistWithCreationDate:(id)arg1 ;
-(double)localFactoryScore;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
-(BOOL)isEquivalentToSurveyResult:(id)arg1 ;
@end

