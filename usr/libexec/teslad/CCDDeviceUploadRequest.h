//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDRequest.h"

@class MCDeviceUploadCredentials, NSDictionary, NSString;

@interface CCDDeviceUploadRequest : CCDRequest
{
    long long _requestType;	// 8 = 0x8
    MCDeviceUploadCredentials *_userCredentials;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000110e4
@property(retain, nonatomic) MCDeviceUploadCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)requestWithError:(id *)arg1;	// IMP=0x0000000100010dd8
- (id)_requestBodyData;	// IMP=0x0000000100010c8c
- (id)_endpointURL;	// IMP=0x0000000100010bbc
- (id)_requestHeader;	// IMP=0x0000000100010a4c
- (id)_contentType;	// IMP=0x0000000100010a40
@property(readonly, nonatomic) NSDictionary *requestBody;
@property(readonly, nonatomic) NSString *httpMethod;
@property(readonly, nonatomic) NSString *endpointPath;

@end

