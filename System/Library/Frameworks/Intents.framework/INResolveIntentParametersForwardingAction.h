/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentForwardingAction.h>

@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction {

	BOOL _resolvesAllParameters;
	NSArray* _parameterNames;

}

@property (nonatomic,readonly) BOOL resolvesAllParameters;              //@synthesize resolvesAllParameters=_resolvesAllParameters - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames;                //@synthesize parameterNames=_parameterNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIntent:(id)arg1 parameterNames:(id)arg2 ;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_completionHandlerForMultipleParametersWithActionCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_completionHandlerForSingleParameterNamed:(id)arg1 withActionCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)resolvesAllParameters;
-(NSArray *)parameterNames;
@end

