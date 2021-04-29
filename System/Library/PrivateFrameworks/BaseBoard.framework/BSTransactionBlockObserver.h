/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSTransactionObserver.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver> {

	NSMutableArray* _willBeginBlocks;
	NSMutableArray* _didBeginBlocks;
	NSMutableArray* _didFinishWorkBlocks;
	NSMutableArray* _didCompleteBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionWillBegin:(id)arg1 ;
-(void)transactionDidBegin:(id)arg1 ;
-(void)transactionDidFinishWork:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)addTransactionWillBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidFinishWorkBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidCompleteBlock:(/*^block*/id)arg1 ;
@end

