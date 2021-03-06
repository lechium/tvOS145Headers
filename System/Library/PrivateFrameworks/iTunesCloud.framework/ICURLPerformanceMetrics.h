/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ICURLPerformanceMetrics : NSObject {

	BOOL _cachedResponse;
	BOOL _connectionReused;
	double _connectionStartTime;
	double _connectionEndTime;
	double _domainLookupStartTime;
	double _domainLookupEndTime;
	double _fetchStartTime;
	double _requestStartTime;
	double _responseStartTime;
	double _responseEndTime;
	double _secureConnectionStartTime;
	NSString* _appleTimingApp;
	NSString* _connectionType;
	NSString* _edgeNodeCacheStatus;
	NSString* _environmentDataCenter;
	NSString* _responseDate;
	unsigned long long _statusCode;
	unsigned long long _redirectCount;
	unsigned long long _requestMessageSize;
	NSString* _requestUrl;
	NSString* _resolvedIPAddress;
	unsigned long long _responseMessageSize;

}

@property (nonatomic,readonly) double connectionStartTime;                          //@synthesize connectionStartTime=_connectionStartTime - In the implementation block
@property (nonatomic,readonly) double connectionEndTime;                            //@synthesize connectionEndTime=_connectionEndTime - In the implementation block
@property (nonatomic,readonly) double domainLookupStartTime;                        //@synthesize domainLookupStartTime=_domainLookupStartTime - In the implementation block
@property (nonatomic,readonly) double domainLookupEndTime;                          //@synthesize domainLookupEndTime=_domainLookupEndTime - In the implementation block
@property (nonatomic,readonly) double fetchStartTime;                               //@synthesize fetchStartTime=_fetchStartTime - In the implementation block
@property (nonatomic,readonly) double requestStartTime;                             //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) double responseStartTime;                            //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,readonly) double responseEndTime;                              //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (nonatomic,readonly) double secureConnectionStartTime;                    //@synthesize secureConnectionStartTime=_secureConnectionStartTime - In the implementation block
@property (nonatomic,readonly) BOOL cachedResponse;                                 //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (nonatomic,readonly) BOOL connectionReused;                               //@synthesize connectionReused=_connectionReused - In the implementation block
@property (nonatomic,readonly) NSString * appleTimingApp;                           //@synthesize appleTimingApp=_appleTimingApp - In the implementation block
@property (nonatomic,readonly) NSString * connectionType;                           //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) NSString * edgeNodeCacheStatus;                      //@synthesize edgeNodeCacheStatus=_edgeNodeCacheStatus - In the implementation block
@property (nonatomic,readonly) NSString * environmentDataCenter;                    //@synthesize environmentDataCenter=_environmentDataCenter - In the implementation block
@property (nonatomic,readonly) NSString * responseDate;                             //@synthesize responseDate=_responseDate - In the implementation block
@property (nonatomic,readonly) unsigned long long statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) unsigned long long redirectCount;                    //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestMessageSize;               //@synthesize requestMessageSize=_requestMessageSize - In the implementation block
@property (nonatomic,readonly) NSString * requestUrl;                               //@synthesize requestUrl=_requestUrl - In the implementation block
@property (nonatomic,readonly) NSString * resolvedIPAddress;                        //@synthesize resolvedIPAddress=_resolvedIPAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long responseMessageSize;              //@synthesize responseMessageSize=_responseMessageSize - In the implementation block
-(unsigned long long)statusCode;
-(BOOL)cachedResponse;
-(unsigned long long)redirectCount;
-(NSString *)connectionType;
-(BOOL)connectionReused;
-(double)connectionEndTime;
-(double)connectionStartTime;
-(double)domainLookupEndTime;
-(double)domainLookupStartTime;
-(double)fetchStartTime;
-(double)requestStartTime;
-(double)responseEndTime;
-(double)responseStartTime;
-(double)secureConnectionStartTime;
-(NSString *)appleTimingApp;
-(NSString *)resolvedIPAddress;
-(NSString *)responseDate;
-(unsigned long long)requestMessageSize;
-(unsigned long long)responseMessageSize;
-(NSString *)edgeNodeCacheStatus;
-(id)initWithTransactionMetrics:(id)arg1 request:(id)arg2 ;
-(NSString *)environmentDataCenter;
-(NSString *)requestUrl;
@end

