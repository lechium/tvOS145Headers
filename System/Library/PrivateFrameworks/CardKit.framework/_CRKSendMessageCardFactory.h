/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRSCardServing.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol _CRKSendMessageCardFactoryDelegate;
@class NSString;

@interface _CRKSendMessageCardFactory : NSObject <CRSCardServing, CRSIdentifiedServing> {

	id<_CRKSendMessageCardFactoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKSendMessageCardFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_CRKSendMessageCardFactoryDelegate>)delegate;
-(void)setDelegate:(id<_CRKSendMessageCardFactoryDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(void)buildCardForContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

