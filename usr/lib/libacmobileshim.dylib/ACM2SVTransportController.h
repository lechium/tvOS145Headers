/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACC2SVTransportControllerProtocol.h>

@protocol ACM2SVTransportControllerDelegate;
@class NSString;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol> {

	id<ACM2SVTransportControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ACM2SVTransportControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ACM2SVTransportControllerDelegate>)delegate;
-(void)setDelegate:(id<ACM2SVTransportControllerDelegate>)arg1 ;
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelImageFetching;
@end

