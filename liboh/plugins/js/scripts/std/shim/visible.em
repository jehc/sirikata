
{
  /** @namespace visible */
  var visible = function()
  {
      /**
       @param Vec3.
       @return Number.
       
       @description Returns the distance from this visible object to the position
       specified by first argument vector.
       */
      visible.prototype.dist =  function()
      {
      };

      /**
       @return A string corresponding to the URI for your current mesh.  Can pass
       this uri to setMesh functions on your own presences, but cannot set mesh
       directly on a visible.
       */
      visible.prototype.getMesh = function(){
      };


      /**
       @return Vec3 associated with the position of this visible object.

       @description Note: the returned value may be stale if the visible object is far away from you.
       */
      visible.prototype.getPosition = function(){
      };
      

      /**
       @return Number associated with the velocity at which this visible object is travelling.

       @description Note: the returned value may be stale if the visible object is far away from you.
       */
      visible.prototype.getVelocity = function(){
      };


      /** @function
       @return Returns the identifier for the space that the visible is in.
       @type String
       */
      visible.prototype.getSpaceID = function(){};

      /** @function
       @return Returns the identifier for the visible in the space that it's in.
       @type String
       */
      visible.prototype.getVisibleID = function(){};

      
      /**
       @return Quaternion associated with visible object's orientation.

       @description Note: the returned value may be stale if the visible object is far away from you.
       */
      visible.prototype.getOrientation = function(){
      };

      /**
       @return Angular velocity of visible object (rad/s).

       @description Note: the returned value may be stale if the visible object is far away from you.
       */
      visible.prototype.getOrientationVel = function (){
      };



      /**
       @return Number associated with how large the visible object is compared to the
       mesh it came from.
       */
      visible.prototype.getScale = function(){
      };

      /**
       @return String containing the space id and visible id for the visible.  Can use this string as an address through which can send messages.
       */
      visible.prototype.toString = function(){
      };


      /**
       @return Boolean.  If true, positions and velocities for this visible object
       are automatically being updated by the system.
       */
      visible.prototype.getStillVisible = function(){
      };

      /**
       @param Visible object.
       @return Returns true if the visible objects correspond to the same presence
       in the virtual world.
       */
      visible.prototype.checkEqual = function(){
      };
      
  };
}