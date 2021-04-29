/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate;
@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CNContactPropertyModel : NSObject {

	id _source;
	NSArray* _properties;
	NSMutableArray* _validProperties;
	id<CNContactPropertyModelDelegate> _delegate;
	id<CNContactPropertyRemoteModelDelegate> _remoteDelegate;
	NSMutableDictionary* _model;
	NSMutableArray* _transactions;

}

@property (nonatomic,retain) NSMutableDictionary * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactions;                                        //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * validProperties;                                     //@synthesize validProperties=_validProperties - In the implementation block
@property (nonatomic,retain) id source;                                                            //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSArray * properties;                                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) id<CNContactPropertyModelDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CNContactPropertyRemoteModelDelegate> remoteDelegate;              //@synthesize remoteDelegate=_remoteDelegate - In the implementation block
-(id<CNContactPropertyModelDelegate>)delegate;
-(void)setDelegate:(id<CNContactPropertyModelDelegate>)arg1 ;
-(id)source;
-(void)setSource:(id)arg1 ;
-(NSArray *)properties;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableDictionary *)model;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setModel:(NSMutableDictionary *)arg1 ;
-(long long)sectionCount;
-(NSMutableArray *)transactions;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(long long)rowCountForSection:(long long)arg1 ;
-(id)propertyForIndexPath:(id)arg1 ;
-(NSMutableArray *)validProperties;
-(id)resolvePendingTransactions;
-(void)setUpdatedTransactions:(id)arg1 ;
-(void)setRemoteDelegate:(id<CNContactPropertyRemoteModelDelegate>)arg1 ;
-(void)reloadModelFromSource;
-(void)noteTransactionsUpdated;
-(void)setValidProperties:(NSMutableArray *)arg1 ;
-(long long)sectionForProperty:(id)arg1 ;
-(id<CNContactPropertyRemoteModelDelegate>)remoteDelegate;
@end
