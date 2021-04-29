/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, CLLocation, NSString;

@interface HMDLocationCluster : HMFObject <HMFLogging> {

	NSArray* _locations;

}

@property (copy,readonly) NSArray * locations;                      //@synthesize locations=_locations - In the implementation block
@property (copy,readonly) CLLocation * bestLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)locations;
-(id)attributeDescriptions;
-(id)initWithLocations:(id)arg1 ;
-(CLLocation *)bestLocation;
-(id)kMeansClusteredGroups;
-(id)locationFromKMeansClusteredGroups:(id)arg1 ;
-(void)clusterWithGroups:(id)arg1 ;
-(id)generateNewGroupsFromGroups:(id)arg1 ;
@end

