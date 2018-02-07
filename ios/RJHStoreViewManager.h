//
//  RJHReactStoreViewManager.h
//  ReactNativeStoreView
//
//  Created by Rob Hogan on 09/02/2016.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@import StoreKit;

@interface RJHStoreViewManager : NSObject <RCTBridgeModule, SKStoreProductViewControllerDelegate>

@property (nonatomic) SKStoreProductViewController *storeProductView;

@end
