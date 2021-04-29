/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol REElementActionDelegate;
@interface REElementAction : NSObject <NSCopying, NSCoding> {

	id<REElementActionDelegate> _delegate;
	BOOL _forceExecution;

}

@property (assign,nonatomic) BOOL forceExecution;                                      //@synthesize forceExecution=_forceExecution - In the implementation block
@property (assign,nonatomic,__weak) id<REElementActionDelegate> delegate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<REElementActionDelegate>)delegate;
-(void)setDelegate:(id<REElementActionDelegate>)arg1 ;
-(void)setForceExecution:(BOOL)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_didFinish:(BOOL)arg1 ;
-(BOOL)forceExecution;
@end

