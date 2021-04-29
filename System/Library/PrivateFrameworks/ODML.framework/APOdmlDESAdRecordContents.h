/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString, NSMutableDictionary;

@interface APOdmlDESAdRecordContents : NSObject {

	BOOL _addImpression;
	BOOL _addTap;
	NSNumber* _originalIndex;
	NSString* _instanceID;
	NSMutableDictionary* _odmlData;
	NSString* _responseType;

}

@property (nonatomic,retain) NSNumber * originalIndex;                    //@synthesize originalIndex=_originalIndex - In the implementation block
@property (nonatomic,readonly) NSString * instanceID;                     //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * odmlData;              //@synthesize odmlData=_odmlData - In the implementation block
@property (nonatomic,retain) NSString * responseType;                     //@synthesize responseType=_responseType - In the implementation block
@property (assign,nonatomic) BOOL addImpression;                          //@synthesize addImpression=_addImpression - In the implementation block
@property (assign,nonatomic) BOOL addTap;                                 //@synthesize addTap=_addTap - In the implementation block
-(NSString *)responseType;
-(NSString *)instanceID;
-(void)setResponseType:(NSString *)arg1 ;
-(NSNumber *)originalIndex;
-(void)setOriginalIndex:(NSNumber *)arg1 ;
-(NSMutableDictionary *)odmlData;
-(void)setOdmlData:(NSMutableDictionary *)arg1 ;
-(BOOL)addImpression;
-(void)setAddImpression:(BOOL)arg1 ;
-(BOOL)addTap;
-(void)setAddTap:(BOOL)arg1 ;
@end

