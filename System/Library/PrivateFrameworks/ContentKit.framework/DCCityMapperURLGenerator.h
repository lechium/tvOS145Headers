/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/DCMapsURLGenerator.h>

@class NSString;

@interface DCCityMapperURLGenerator : DCMapsURLGenerator {

	NSString* _startCoordinate;
	NSString* _endCoordinate;

}

@property (nonatomic,retain) NSString * startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (nonatomic,retain) NSString * endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
+(void)generateURLWithMapsLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)scheme;
-(id)host;
-(id)path;
-(void)setStartCoordinate:(NSString *)arg1 ;
-(void)setEndCoordinate:(NSString *)arg1 ;
-(NSString *)endCoordinate;
-(NSString *)startCoordinate;
-(void)populateQueryDictionary;
@end

