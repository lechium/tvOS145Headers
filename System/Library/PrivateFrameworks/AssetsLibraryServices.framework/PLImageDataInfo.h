/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface PLImageDataInfo : NSObject {

	BOOL _deliveredPlaceholder;
	BOOL _canDownloadFromCloud;
	long long _deliveredFormat;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	NSString* _UTI;
	long long _EXIFOrientation;

}

@property (assign) long long deliveredFormat;                     //@synthesize deliveredFormat=_deliveredFormat - In the implementation block
@property (assign) BOOL deliveredPlaceholder;                     //@synthesize deliveredPlaceholder=_deliveredPlaceholder - In the implementation block
@property (assign) BOOL canDownloadFromCloud;                     //@synthesize canDownloadFromCloud=_canDownloadFromCloud - In the implementation block
@property (retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (retain) NSString * sandboxExtensionToken;              //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (retain) NSString * UTI;                                //@synthesize UTI=_UTI - In the implementation block
@property (assign) long long EXIFOrientation;                     //@synthesize EXIFOrientation=_EXIFOrientation - In the implementation block
-(id)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(NSString *)UTI;
-(long long)deliveredFormat;
-(void)setDeliveredFormat:(long long)arg1 ;
-(BOOL)deliveredPlaceholder;
-(void)setDeliveredPlaceholder:(BOOL)arg1 ;
-(BOOL)canDownloadFromCloud;
-(void)setCanDownloadFromCloud:(BOOL)arg1 ;
-(NSString *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(long long)EXIFOrientation;
-(void)setEXIFOrientation:(long long)arg1 ;
@end

