/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCountedSet, NSMutableDictionary;

@interface VSBinder : NSObject {

	BOOL _establishmentProhibited;
	id _boundObject;
	NSCountedSet* _currentlyChangingBindings;
	NSMutableDictionary* _establishedBindings;

}

@property (nonatomic,__weak,readonly) id boundObject;                                                    //@synthesize boundObject=_boundObject - In the implementation block
@property (assign,getter=isEstablishmentProhibited,nonatomic) BOOL establishmentProhibited;              //@synthesize establishmentProhibited=_establishmentProhibited - In the implementation block
@property (nonatomic,retain) NSCountedSet * currentlyChangingBindings;                                   //@synthesize currentlyChangingBindings=_currentlyChangingBindings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * establishedBindings;                                  //@synthesize establishedBindings=_establishedBindings - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tearDownBinding:(id)arg1 ;
-(NSMutableDictionary *)establishedBindings;
-(BOOL)isEstablishmentProhibited;
-(id)_infoForBinding:(id)arg1 ;
-(NSCountedSet *)currentlyChangingBindings;
-(id)valueForBinding:(id)arg1 ;
-(id)boundObject;
-(id)initWithBoundObject:(id)arg1 ;
-(void)establishBinding:(id)arg1 withInfo:(id)arg2 ;
-(void)setValue:(id)arg1 forBinding:(id)arg2 ;
-(void)setEstablishmentProhibited:(BOOL)arg1 ;
-(void)setCurrentlyChangingBindings:(NSCountedSet *)arg1 ;
-(void)setEstablishedBindings:(NSMutableDictionary *)arg1 ;
@end

