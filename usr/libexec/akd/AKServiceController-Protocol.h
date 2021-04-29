//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AKAuthHandler, AKURLRequestProvider;

@protocol AKServiceController <NSObject>
- (void)executeRequestWithCompletion:(void (^)(NSHTTPURLResponse *, NSData *, NSError *))arg1;
- (void)setAuthenticationDelegate:(id <AKAuthHandler>)arg1;
- (id)initWithRequestProvider:(id <AKURLRequestProvider>)arg1;
@end

