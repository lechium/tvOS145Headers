/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject {

	BOOL _isTrusted;
	BOOL _isTrustedCached;
	NSString* _urlScheme;
	BOOL _isTopLevelNavigation;
	BOOL _isSafe;
	BOOL _overwriteHTTPOnlyCookies;
	NSURL* _url;
	NSURL* _mainDocumentURL;
	NSURL* _siteForCookies;
	NSString* _partition;
	unsigned long long _acceptPolicy;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,retain) NSURL * siteForCookies;               //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (nonatomic,retain) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (assign) BOOL isTopLevelNavigation;                      //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (assign) BOOL isSafe;                                    //@synthesize isSafe=_isSafe - In the implementation block
@property (assign) BOOL overwriteHTTPOnlyCookies;                  //@synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies - In the implementation block
@property (assign) unsigned long long acceptPolicy;                //@synthesize acceptPolicy=_acceptPolicy - In the implementation block
-(id)init;
-(NSURL *)mainDocumentURL;
-(void)setPartition:(NSString *)arg1 ;
-(NSString *)partition;
-(void)setAcceptPolicy:(unsigned long long)arg1 ;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setIsTopLevelNavigation:(BOOL)arg1 ;
-(void)setIsSafe:(BOOL)arg1 ;
-(void)setSiteForCookies:(NSURL *)arg1 ;
-(void)setOverwriteHTTPOnlyCookies:(BOOL)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)siteForCookies;
-(BOOL)isTopLevelNavigation;
-(BOOL)isSafe;
-(unsigned long long)acceptPolicy;
-(NSURL *)url;
-(BOOL)overwriteHTTPOnlyCookies;
-(BOOL)isTrusted;
@end

