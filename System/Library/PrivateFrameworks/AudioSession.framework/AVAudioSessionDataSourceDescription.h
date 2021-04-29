/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioSession/AudioSession-Structs.h>
@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {

	void* _impl;

}

@property (readonly) NSNumber * dataSourceID; 
@property (readonly) NSString * dataSourceName; 
@property (readonly) NSString * location; 
@property (readonly) NSString * orientation; 
@property (readonly) NSArray * supportedPolarPatterns; 
@property (readonly) NSString * selectedPolarPattern; 
@property (readonly) NSString * preferredPolarPattern; 
+(id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)orientation;
-(NSString *)location;
-(id)initWithSessionID:(unsigned)arg1 ;
-(NSNumber *)dataSourceID;
-(NSString *)dataSourceName;
-(DataSourceDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToDataSource:(id)arg1 ;
-(id)privateGetOwningPortID;
-(NSString *)selectedPolarPattern;
-(void)configurePolarPatterns:(id)arg1 ;
-(id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned)arg3 ;
-(NSString *)preferredPolarPattern;
-(NSArray *)supportedPolarPatterns;
-(BOOL)setPreferredPolarPattern:(id)arg1 error:(id*)arg2 ;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
@end

