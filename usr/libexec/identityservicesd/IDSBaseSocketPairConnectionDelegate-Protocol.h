//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSBaseSocketPairConnection, NSData;

@protocol IDSBaseSocketPairConnectionDelegate <NSObject>

@optional
- (void)connectionDidClose:(IDSBaseSocketPairConnection *)arg1;
- (void)connection:(IDSBaseSocketPairConnection *)arg1 didReceiveData:(NSData *)arg2;
@end
