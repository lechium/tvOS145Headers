/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNInhibitor.h>

@protocol CNInhibitor <NSObject>
@required
-(void)start;
-(void)stop;

@end


@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor> {

	BOOL _debugIsInhibiting;

}

@property (assign,nonatomic) BOOL debugIsInhibiting;                //@synthesize debugIsInhibiting=_debugIsInhibiting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg1 ;
+(id)os_transactionInhibitorWithLabel:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)setDebugIsInhibiting:(BOOL)arg1 ;
-(BOOL)debugIsInhibiting;
@end

