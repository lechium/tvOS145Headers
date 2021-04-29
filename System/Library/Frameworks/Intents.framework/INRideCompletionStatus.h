/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideCompletionStatusExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUserActivity, INCurrencyAmount, NSSet, NSString;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding> {

	BOOL _completed;
	BOOL _missedPickup;
	BOOL _outstanding;
	BOOL _canceledByService;
	NSUserActivity* _completionUserActivity;
	INCurrencyAmount* _paymentAmount;
	unsigned long long _feedbackType;
	NSSet* _defaultTippingOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceledByService,nonatomic,readonly) BOOL canceledByService;              //@synthesize canceledByService=_canceledByService - In the implementation block
@property (nonatomic,retain) NSUserActivity * completionUserActivity;                          //@synthesize completionUserActivity=_completionUserActivity - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (getter=isMissedPickup,nonatomic,readonly) BOOL missedPickup;                        //@synthesize missedPickup=_missedPickup - In the implementation block
@property (nonatomic,readonly) INCurrencyAmount * paymentAmount;                               //@synthesize paymentAmount=_paymentAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long feedbackType;                                //@synthesize feedbackType=_feedbackType - In the implementation block
@property (getter=isOutstanding,nonatomic,readonly) BOOL outstanding;                          //@synthesize outstanding=_outstanding - In the implementation block
@property (nonatomic,retain) NSSet * defaultTippingOptions;                                    //@synthesize defaultTippingOptions=_defaultTippingOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)completed;
+(id)canceledByService;
+(id)completedWithSettledPaymentAmount:(id)arg1 ;
+(id)completedWithOutstandingPaymentAmount:(id)arg1 ;
+(id)canceledByUser;
+(id)canceledMissedPickup;
+(id)completedWithOutstandingFeedbackType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)feedbackType;
-(BOOL)isCanceled;
-(id)_newValue;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCurrencyAmount *)paymentAmount;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(NSUserActivity *)arg1 ;
-(NSSet *)defaultTippingOptions;
-(void)setDefaultTippingOptions:(NSSet *)arg1 ;
-(BOOL)isCompleted;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;
-(id)_initCompleted:(BOOL)arg1 canceledByService:(BOOL)arg2 missedPickup:(BOOL)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(BOOL)arg6 ;
-(id)_initWithValue:(id)arg1 ;
@end

