/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TransactionMetrics, NSString, NSUUID, NSDate, NSURLRequest, NSURLResponse, NSNumber;

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {

	BOOL __connectionTimingCached;
	BOOL __forCache;
	__CFN_TransactionMetrics* __metrics;
	SCD_Struct_NS57 __connectionTiming;

}

@property (readonly) BOOL _secureConnection; 
@property (readonly) BOOL _localCache; 
@property (readonly) BOOL _serverPush; 
@property (readonly) BOOL _connectionRace; 
@property (readonly) unsigned _redirected; 
@property (copy,readonly) NSString * _localAddressAndPort; 
@property (copy,readonly) NSString * _remoteAddressAndPort; 
@property (copy,readonly) NSUUID * _connectionIdentifier; 
@property (readonly) long long _requestHeaderBytesSent; 
@property (readonly) long long _responseHeaderBytesReceived; 
@property (readonly) long long _responseBodyBytesReceived; 
@property (readonly) long long _responseBodyBytesDecoded; 
@property (readonly) BOOL _apsRelayAttempted; 
@property (readonly) BOOL _apsRelaySucceeded; 
@property (readonly) long long _totalBytesSent; 
@property (readonly) long long _totalBytesReceived; 
@property (readonly) int _negotiatedTLSProtocol; 
@property (readonly) unsigned short _negotiatedTLSCipher; 
@property (readonly) BOOL _usesMultipath; 
@property (copy,readonly) NSDate * _firstByteReceivedDate; 
@property (copy,readonly) NSString * _interfaceName; 
@property (assign,nonatomic) SCD_Struct_NS57 _connectionTiming;                    //@synthesize _connectionTiming=__connectionTiming - In the implementation block
@property (assign,nonatomic) BOOL _connectionTimingCached;                         //@synthesize _connectionTimingCached=__connectionTimingCached - In the implementation block
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSDate * fetchStartDate; 
@property (copy,readonly) NSDate * domainLookupStartDate; 
@property (copy,readonly) NSDate * domainLookupEndDate; 
@property (copy,readonly) NSDate * connectStartDate; 
@property (copy,readonly) NSDate * secureConnectionStartDate; 
@property (copy,readonly) NSDate * secureConnectionEndDate; 
@property (copy,readonly) NSDate * connectEndDate; 
@property (copy,readonly) NSDate * requestStartDate; 
@property (copy,readonly) NSDate * requestEndDate; 
@property (copy,readonly) NSDate * responseStartDate; 
@property (copy,readonly) NSDate * responseEndDate; 
@property (copy,readonly) NSString * networkProtocolName; 
@property (getter=isProxyConnection,readonly) BOOL proxyConnection; 
@property (getter=isReusedConnection,readonly) BOOL reusedConnection; 
@property (readonly) long long resourceFetchType; 
@property (readonly) long long countOfRequestHeaderBytesSent; 
@property (readonly) long long countOfRequestBodyBytesSent; 
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding; 
@property (readonly) long long countOfResponseHeaderBytesReceived; 
@property (readonly) long long countOfResponseBodyBytesReceived; 
@property (readonly) long long countOfResponseBodyBytesAfterDecoding; 
@property (copy,readonly) NSString * localAddress; 
@property (copy,readonly) NSNumber * localPort; 
@property (copy,readonly) NSString * remoteAddress; 
@property (copy,readonly) NSNumber * remotePort; 
@property (copy,readonly) NSNumber * negotiatedTLSProtocolVersion; 
@property (copy,readonly) NSNumber * negotiatedTLSCipherSuite; 
@property (getter=isCellular,readonly) BOOL cellular; 
@property (getter=isExpensive,readonly) BOOL expensive; 
@property (getter=isConstrained,readonly) BOOL constrained; 
@property (getter=isMultipath,readonly) BOOL multipath; 
@property (readonly) long long domainResolutionProtocol; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(NSString *)_interfaceName;
-(SCD_Struct_NS57)_connectionTiming;
-(BOOL)_connectionTimingCached;
-(NSDate *)fetchStartDate;
-(NSDate *)domainLookupStartDate;
-(NSDate *)domainLookupEndDate;
-(NSDate *)connectStartDate;
-(NSDate *)secureConnectionStartDate;
-(NSDate *)secureConnectionEndDate;
-(NSDate *)connectEndDate;
-(NSDate *)requestStartDate;
-(NSDate *)requestEndDate;
-(NSDate *)responseStartDate;
-(NSDate *)responseEndDate;
-(NSString *)networkProtocolName;
-(long long)resourceFetchType;
-(long long)countOfRequestHeaderBytesSent;
-(long long)countOfRequestBodyBytesSent;
-(long long)countOfRequestBodyBytesBeforeEncoding;
-(long long)countOfResponseHeaderBytesReceived;
-(long long)countOfResponseBodyBytesReceived;
-(long long)countOfResponseBodyBytesAfterDecoding;
-(NSString *)localAddress;
-(NSNumber *)localPort;
-(NSString *)remoteAddress;
-(NSNumber *)remotePort;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(NSNumber *)negotiatedTLSCipherSuite;
-(long long)domainResolutionProtocol;
-(BOOL)isProxyConnection;
-(BOOL)isReusedConnection;
-(BOOL)isCellular;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(BOOL)isMultipath;
-(void)set_connectionTiming:(SCD_Struct_NS57)arg1 ;
-(void)set_connectionTimingCached:(BOOL)arg1 ;
-(BOOL)_secureConnection;
-(BOOL)_localCache;
-(BOOL)_serverPush;
-(BOOL)_connectionRace;
-(unsigned)_redirected;
-(NSString *)_localAddressAndPort;
-(NSString *)_remoteAddressAndPort;
-(NSUUID *)_connectionIdentifier;
-(long long)_requestHeaderBytesSent;
-(long long)_responseHeaderBytesReceived;
-(long long)_responseBodyBytesReceived;
-(long long)_responseBodyBytesDecoded;
-(BOOL)_apsRelayAttempted;
-(BOOL)_apsRelaySucceeded;
-(long long)_totalBytesSent;
-(long long)_totalBytesReceived;
-(int)_negotiatedTLSProtocol;
-(unsigned short)_negotiatedTLSCipher;
-(BOOL)_usesMultipath;
-(NSDate *)_firstByteReceivedDate;
@end

