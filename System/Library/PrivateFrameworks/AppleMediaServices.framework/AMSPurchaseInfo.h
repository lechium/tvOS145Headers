/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSPurchaseDelegate;
@class ACAccount, NSMutableDictionary, AMSBuyParams, AMSProcessInfo, NSDictionary, NSString, NSURL, AMSPurchase;

@interface AMSPurchaseInfo : NSObject {

	BOOL _addKBSync;
	BOOL _hasBeenAuthedForBuy;
	BOOL _hasRetriedOriginalOwnerAccount;
	ACAccount* _account;
	NSMutableDictionary* _additionalHeaders;
	AMSBuyParams* _buyParams;
	AMSProcessInfo* _clientInfo;
	id<AMSPurchaseDelegate> _delegate;
	NSDictionary* _dialog;
	NSString* _dialogId;
	NSURL* _paymentServicesURL;
	NSString* _paymentToken;
	AMSPurchase* _purchase;

}

@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalHeaders;              //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (assign,nonatomic) BOOL addKBSync;                                       //@synthesize addKBSync=_addKBSync - In the implementation block
@property (nonatomic,retain) AMSBuyParams * buyParams;                             //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * clientInfo;                        //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * dialog;                                //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,retain) NSString * dialogId;                                  //@synthesize dialogId=_dialogId - In the implementation block
@property (assign,nonatomic) BOOL hasBeenAuthedForBuy;                             //@synthesize hasBeenAuthedForBuy=_hasBeenAuthedForBuy - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedOriginalOwnerAccount;                  //@synthesize hasRetriedOriginalOwnerAccount=_hasRetriedOriginalOwnerAccount - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                           //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                              //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,readonly) AMSPurchase * purchase;                             //@synthesize purchase=_purchase - In the implementation block
-(id)description;
-(id<AMSPurchaseDelegate>)delegate;
-(void)setDelegate:(id<AMSPurchaseDelegate>)arg1 ;
-(AMSBuyParams *)buyParams;
-(void)setBuyParams:(AMSBuyParams *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)dialogId;
-(void)setDialogId:(NSString *)arg1 ;
-(AMSPurchase *)purchase;
-(NSDictionary *)dialog;
-(id)initWithPurchase:(id)arg1 ;
-(void)setDialog:(NSDictionary *)arg1 ;
-(NSString *)paymentToken;
-(NSURL *)paymentServicesURL;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(void)setPaymentToken:(NSString *)arg1 ;
-(NSMutableDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSMutableDictionary *)arg1 ;
-(id)_purchaseStringForType:(long long)arg1 ;
-(BOOL)addKBSync;
-(void)setAddKBSync:(BOOL)arg1 ;
-(BOOL)hasBeenAuthedForBuy;
-(void)setHasBeenAuthedForBuy:(BOOL)arg1 ;
-(BOOL)hasRetriedOriginalOwnerAccount;
-(void)setHasRetriedOriginalOwnerAccount:(BOOL)arg1 ;
@end

