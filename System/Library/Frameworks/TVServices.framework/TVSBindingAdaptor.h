/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface TVSBindingAdaptor : NSObject {

	id _owner;
	NSMutableDictionary* _bindingInfo;
	NSString* _ignoredBinding;

}
+(id)atvValueTransformerFromOptions:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_owner;
-(id)initWithOwner:(id)arg1 ;
-(id)valueForBinding:(id)arg1 ;
-(void)setValue:(id)arg1 forBinding:(id)arg2 ;
-(void)tvs_unbind:(id)arg1 ;
-(void)unbindAll;
-(BOOL)isBindingBound:(id)arg1 ;
-(void)establishBinding:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 bindingOptions:(id)arg4 updateHandler:(/*^block*/id)arg5 ;
-(id)bindingAdaptorInfoForBinding:(id)arg1 ;
-(id)optionsForBinding:(id)arg1 ;
-(BOOL)validateValue:(id*)arg1 forBinding:(id)arg2 error:(id*)arg3 ;
@end

