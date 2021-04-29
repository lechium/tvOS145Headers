/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol AXAssetAssertion <NSObject>
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@required
+(id)assertionWithPropertyListRepresentation:(id)arg1 error:(id*)arg2;
-(NSString *)clientIdentifier;
-(NSString *)assetType;
-(id)propertyListRepresentation;

@end
