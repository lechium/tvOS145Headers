/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct hmf_unfair_data_lock_s {
	os_unfair_lock_s lock;
} hmf_unfair_data_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct HMFRate {
	unsigned long long value;
	double period;
} HMFRate;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_HM6;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_HM14;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;
