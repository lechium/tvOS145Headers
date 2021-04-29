/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, VUIDocumentContextData, VUIDocumentPreFetchedData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject {

	BOOL _shouldLoadPageImmediately;
	NSString* _documentRef;
	NSString* _documentType;
	NSString* _controllerRef;
	VUIDocumentContextData* _contextData;
	VUIDocumentPreFetchedData* _prefetchData;
	VUIDocumentUIConfiguration* _uiConfiguration;

}

@property (nonatomic,retain) NSString * documentRef;                                    //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,retain) NSString * documentType;                                   //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,retain) NSString * controllerRef;                                  //@synthesize controllerRef=_controllerRef - In the implementation block
@property (nonatomic,retain) VUIDocumentContextData * contextData;                      //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,retain) VUIDocumentPreFetchedData * prefetchData;                  //@synthesize prefetchData=_prefetchData - In the implementation block
@property (nonatomic,retain) VUIDocumentUIConfiguration * uiConfiguration;              //@synthesize uiConfiguration=_uiConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadPageImmediately;                            //@synthesize shouldLoadPageImmediately=_shouldLoadPageImmediately - In the implementation block
+(id)documentDataSourceWithDictionary:(id)arg1 ;
+(BOOL)isCanonicalDocumentRef:(id)arg1 ;
-(void)setContextData:(VUIDocumentContextData *)arg1 ;
-(VUIDocumentContextData *)contextData;
-(id)jsonData;
-(NSString *)documentType;
-(void)setDocumentType:(NSString *)arg1 ;
-(id)initWithDocumentRef:(id)arg1 ;
-(NSString *)documentRef;
-(VUIDocumentUIConfiguration *)uiConfiguration;
-(void)setControllerRef:(NSString *)arg1 ;
-(void)setUiConfiguration:(VUIDocumentUIConfiguration *)arg1 ;
-(void)setPrefetchData:(VUIDocumentPreFetchedData *)arg1 ;
-(id)initWithDataSourceDict:(id)arg1 ;
-(void)setDocumentRef:(NSString *)arg1 ;
-(NSString *)controllerRef;
-(VUIDocumentPreFetchedData *)prefetchData;
-(BOOL)shouldLoadPageImmediately;
-(void)setShouldLoadPageImmediately:(BOOL)arg1 ;
@end

