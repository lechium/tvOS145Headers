/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFFileStorageServiceOperation.h>

@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation> {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;                                     //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
@end

