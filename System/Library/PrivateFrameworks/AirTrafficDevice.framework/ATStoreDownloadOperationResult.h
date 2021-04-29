/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, ICStoreMediaResponseItem, ICRequestContext, NSDictionary;

@interface ATStoreDownloadOperationResult : NSObject {

	BOOL _cancelAllRemaining;
	BOOL _isHLSDownload;
	NSString* _downloadFilePath;
	NSData* _resumeData;
	ICStoreMediaResponseItem* _storeMediaResponseItem;
	ICRequestContext* _requestContext;
	NSDictionary* _assetClientParams;

}

@property (assign,nonatomic) BOOL cancelAllRemaining;                                      //@synthesize cancelAllRemaining=_cancelAllRemaining - In the implementation block
@property (nonatomic,copy) NSString * downloadFilePath;                                    //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (nonatomic,copy) NSData * resumeData;                                            //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,copy) ICStoreMediaResponseItem * storeMediaResponseItem;              //@synthesize storeMediaResponseItem=_storeMediaResponseItem - In the implementation block
@property (nonatomic,copy) ICRequestContext * requestContext;                              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) BOOL isHLSDownload;                                           //@synthesize isHLSDownload=_isHLSDownload - In the implementation block
@property (nonatomic,copy) NSDictionary * assetClientParams;                               //@synthesize assetClientParams=_assetClientParams - In the implementation block
-(id)description;
-(NSString *)downloadFilePath;
-(NSData *)resumeData;
-(ICRequestContext *)requestContext;
-(void)setRequestContext:(ICRequestContext *)arg1 ;
-(void)setResumeData:(NSData *)arg1 ;
-(ICStoreMediaResponseItem *)storeMediaResponseItem;
-(void)setStoreMediaResponseItem:(ICStoreMediaResponseItem *)arg1 ;
-(BOOL)cancelAllRemaining;
-(NSDictionary *)assetClientParams;
-(void)setCancelAllRemaining:(BOOL)arg1 ;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(void)setIsHLSDownload:(BOOL)arg1 ;
-(void)setAssetClientParams:(NSDictionary *)arg1 ;
-(BOOL)isHLSDownload;
@end
