//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol Device;

@interface LoadStoreQueueRequestEncoder : AMSURLRequestEncoder
{
    id <Device> _device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010011b348
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;	// IMP=0x000000010011b284
- (id)initWithBag:(id)arg1 device:(id)arg2;	// IMP=0x000000010011b1fc
- (id)initWithBag:(id)arg1;	// IMP=0x000000010011b174

@end

