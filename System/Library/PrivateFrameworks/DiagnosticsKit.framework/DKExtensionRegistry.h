/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKExtensionRegistry <NSObject>
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@required
-(void)addExtensionAdapter:(id)arg1;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1;
-(Class)extensionClass;
-(Class)responseObjectClass;

@end

