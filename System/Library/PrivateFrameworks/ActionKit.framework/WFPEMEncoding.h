/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface WFPEMEncoding : NSObject {

	NSString* _type;
	NSData* _data;

}

@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * data;                //@synthesize data=_data - In the implementation block
+(id)decodePEM:(id)arg1 error:(id*)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSData *)data;
-(NSString *)type;
-(void)setData:(NSData *)arg1 ;
-(id)initWithType:(id)arg1 data:(id)arg2 ;
-(id)encodedPEM;
@end

