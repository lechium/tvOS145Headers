/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPLocationRecord.h>

@class NSUUID, PPLocation, PPSource, NSArray, NSString;

@interface PPMutableLocationRecord : PPLocationRecord

@property (nonatomic,retain) NSUUID * uuid; 
@property (nonatomic,retain) PPLocation * location; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned short algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) NSArray * contextualNamedEntities; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned extractionAssetVersion; 
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSource:(PPSource *)arg1 ;
-(void)setAlgorithm:(unsigned short)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setLocation:(PPLocation *)arg1 ;
-(void)setExtractionAssetVersion:(unsigned)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
-(void)setContextualNamedEntities:(NSArray *)arg1 ;
@end

